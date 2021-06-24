//
// Created by Phylicia Melinda on 6/22/21.
//

#ifndef FT_CONTAINERS_RBTREE_HPP
#define FT_CONTAINERS_RBTREE_HPP

#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define RESET   "\033[0m"


namespace ft {

	template <class T>
	struct Node {
		T data; //T //int
		Node *parent;
		Node *left;
		Node *right;

		bool is_tnull;
		int color;
	};


	template < class T> // class Compare
	class RedBlackTree {
	public:
		typedef Node<T> * NodePtr;

	private:
		NodePtr root;
		NodePtr TNULL;
//		NodePtr _first;
//		NodePtr _last;

	public:
	NodePtr getTNULL(){
		return this->TNULL;
	}

	NodePtr get_root() const{
		return this->root;
	}

	void initializeNULLNode(NodePtr node) {
		//	node->data = 0;
			node->parent = NULL;

			node->left = node; // root = root
			// node->left = NULL;
			node->right = node;
			//node->right = NULL;
			node->color = 0; // 0 -black
			node->is_tnull = true;
		}

		// Preorder
		void preOrderHelper(NodePtr node) {
			if (node != TNULL) {
				std::cout << node->data << " ";
				preOrderHelper(node->left);
				preOrderHelper(node->right);
			}
		}

		// Inorder
		void inOrderHelper(NodePtr node) {
			if (node != TNULL) {
				inOrderHelper(node->left);
				std::cout << node->data << " ";
				inOrderHelper(node->right);
			}
		}

		// Post order
		void postOrderHelper(NodePtr node) {
			if (node != TNULL) {
				postOrderHelper(node->left);
				postOrderHelper(node->right);
				std::cout << node->data << " ";
			}
		}

		NodePtr searchTreeHelper(NodePtr node, int key) {
			if (node == TNULL || key == node->data) {
				return node;
			}

			if (key < node->data) {
				return searchTreeHelper(node->left, key);
			}
			return searchTreeHelper(node->right, key);
		}

		// For balancing the tree after deletion
		void deleteFix(NodePtr x) {
			NodePtr s;
			while (x != root && x->color == 0) {
				if (x == x->parent->left) {
					s = x->parent->right;
					if (s->color == 1) {
						s->color = 0;
						x->parent->color = 1;
						leftRotate(x->parent);
						s = x->parent->right;
					}

					if (s->left->color == 0 && s->right->color == 0) {
						s->color = 1;
						x = x->parent;
					} else {
						if (s->right->color == 0) {
							s->left->color = 0;
							s->color = 1;
							rightRotate(s);
							s = x->parent->right;
						}

						s->color = x->parent->color;
						x->parent->color = 0;
						s->right->color = 0;
						leftRotate(x->parent);
						x = root;
					}
				} else {
					s = x->parent->left;
					if (s->color == 1) {
						s->color = 0;
						x->parent->color = 1;
						rightRotate(x->parent);
						s = x->parent->left;
					}

					if (s->right->color == 0 && s->right->color == 0) {
						s->color = 1;
						x = x->parent;
					} else {
						if (s->left->color == 0) {
							s->right->color = 0;
							s->color = 1;
							leftRotate(s);
							s = x->parent->left;
						}

						s->color = x->parent->color;
						x->parent->color = 0;
						s->left->color = 0;
						rightRotate(x->parent);
						x = root;
					}
				}
			}
			x->color = 0;
		}

		void rbTransplant(NodePtr u, NodePtr v) {
			if (u->parent == NULL) {
				root = v;
			} else if (u == u->parent->left) {
				u->parent->left = v;
			} else {
				u->parent->right = v;
			}
			v->parent = u->parent;
		}
// clear key->pair
		void deleteNodeHelper(NodePtr node, T key) {
			NodePtr z = TNULL;
			NodePtr x, y;
			while (node != TNULL) {
				if (node->data == key.first) {
					z = node;
				}

				if (node->data <= key) {
					node = node->right;
				} else {
					node = node->left;
				}
			}

			if (z == TNULL) {
				std::cout << "Key not found in the tree" << std::endl;
				return;
			}

			y = z;
			int y_original_color = y->color;
			if (z->left == TNULL) {
				x = z->right;
				rbTransplant(z, z->right);
			} else if (z->right == TNULL) {
				x = z->left;
				rbTransplant(z, z->left);
			} else {
				y = minimum(z->right);
				y_original_color = y->color;
				x = y->right;
				if (y->parent == z) {
					x->parent = y;
				} else {
					rbTransplant(y, y->right);
					y->right = z->right;
					y->right->parent = y;
				}

				rbTransplant(z, y);
				y->left = z->left;
				y->left->parent = y;
				y->color = z->color;
			}
			delete z;
			if (y_original_color == 0) {
				deleteFix(x);
			}
		}

		// For balancing the tree after insertion
		void insertFix(NodePtr k) {
			NodePtr u;
			while (k->parent->color == 1) {
				if (k->parent == k->parent->parent->right) {
					u = k->parent->parent->left;
					if (u->color == 1) {
						u->color = 0;
						k->parent->color = 0;
						k->parent->parent->color = 1;
						k = k->parent->parent;
					} else {
						if (k == k->parent->left) {
							k = k->parent;
							rightRotate(k);
						}
						k->parent->color = 0;
						k->parent->parent->color = 1;
						leftRotate(k->parent->parent);
					}
				} else {
					u = k->parent->parent->right;

					if (u->color == 1) {
						u->color = 0;
						k->parent->color = 0;
						k->parent->parent->color = 1;
						k = k->parent->parent;
					} else {
						if (k == k->parent->right) {
							k = k->parent;
							leftRotate(k);
						}
						k->parent->color = 0;
						k->parent->parent->color = 1;
						rightRotate(k->parent->parent);
					}
				}
				if (k == root) {
					break;
				}
			}
			root->color = 0;
		}

		void printHelper(NodePtr root, std::string indent, bool last) {
			if (root != TNULL) {
				std::cout << indent;
				if (last) {
					std::cout << "R----";
					indent += "   ";
				} else {
					std::cout << "L----";
					indent += "|  ";
				}

				std::string sColor = root->color ? "RED" : "BLACK";
				std::cout << root->data << "(" << sColor << ")" << std::endl;
				printHelper(root->left, indent, false);
				printHelper(root->right, indent, true);
			}
		}

	public:
		RedBlackTree() {
			TNULL = new Node<T>;

			initializeNULLNode(TNULL);
			root = TNULL;
		}

		void preorder() {
			preOrderHelper(this->root);
		}

		void inorder() {
			inOrderHelper(this->root);
		}

		void postorder() {
			postOrderHelper(this->root);
		}

		NodePtr searchTree(int k) {
			return searchTreeHelper(this->root, k);
		}

		NodePtr minimum(NodePtr node) {
			while (node->left != TNULL) {
				node = node->left;
			}
			return node;
		}

		NodePtr maximum(NodePtr node) {
			while (node->right != TNULL) {
				node = node->right;
			}
			return node;
		}

		NodePtr successor(NodePtr x) {
			if (x->right != TNULL) {
				return minimum(x->right);
			}

			NodePtr y = x->parent;
			while (y != TNULL && x == y->right) {
				x = y;
				y = y->parent;
			}
			return y;
		}

		NodePtr predecessor(NodePtr x) {
			if (x->left != TNULL) {
				return maximum(x->left);
			}

			NodePtr y = x->parent;
			while (y != TNULL && x == y->left) {
				x = y;
				y = y->parent;
			}

			return y;
		}

		void leftRotate(NodePtr x) {
			NodePtr y = x->right;
			x->right = y->left;
			if (y->left != TNULL) {
				y->left->parent = x;
			}
			y->parent = x->parent;
			if (x->parent == NULL) {
				this->root = y;
			} else if (x == x->parent->left) {
				x->parent->left = y;
			} else {
				x->parent->right = y;
			}
			y->left = x;
			x->parent = y;
		}

		void rightRotate(NodePtr x) {
			NodePtr y = x->left;
			x->left = y->right;
			if (y->right != TNULL) {
				y->right->parent = x;
			}
			y->parent = x->parent;
			if (x->parent == NULL) {
				this->root = y;
			} else if (x == x->parent->right) {
				x->parent->right = y;
			} else {
				x->parent->left = y;
			}
			y->right = x;
			x->parent = y;
		}


		void upDate_TNULL_node(){
			TNULL->left = minimum(this->root);
			TNULL->right = maximum(this->root);
		}
		// Inserting a node
		// int key
		void insert(const T &data) {
			NodePtr node = new Node<T>;
			node->parent = NULL;
			node->data.first = data.first;

			node->data.second = data.second;

			std::cout <<"PREV "<< node->data.first <<" "<< node->data.second<< std::endl;

			node->left = TNULL;
			node->right = TNULL;
			node->color = 1;
			node->is_tnull = false;

			NodePtr y = NULL;
			NodePtr x = this->root;

			while (x != TNULL) {
				y = x;
				if (node->data < x->data) {
					x = x->left;
				} else {
					x = x->right;
				}
			}

			node->parent = y;
			if (y == NULL) {
				root = node;
			} else if (node->data < y->data) {
				y->left = node;
			} else {
				y->right = node;
			}

			if (node->parent == NULL) {
				node->color = 0;
				upDate_TNULL_node();
				std::cout<<"here\n";
				return;
			}

			if (node->parent->parent == NULL) {
				upDate_TNULL_node();
				std::cout<<"here2\n";
				return;
			}

			insertFix(node);
			upDate_TNULL_node(); //todo

			std::cout << "AFTER "<< node->data.first <<" "<< node->data.second << std::endl << std::endl;

		}

		NodePtr getRoot() {
			return this->root;
		}

		void deleteNode(int data) {
			deleteNodeHelper(this->root, data);
		}

		void printTree() {
			if (root) {
				printHelper(this->root, "", true);
			}
		}

		void traversal(Node<T>* x) const
		{
			if (x == NULL || x == TNULL)
				return ;
			traversal(x->left); //deleteNodeHelper
			traversal(x->right); //
			//std::cout << "here\n";
			std::string color = x->color == 0 ? "\e[33m" : "\e[34m";
			if (x != this->TNULL)
				std::cout << "node: " << color << "[" << x->data.first << "]" << "\e[0m" << "    addr: " << x << ", left: "
						  << x->left << ", right: " << x->right << ", parent: " << x->parent << std::endl;
			else
				std::cout << "found limit node, with addr: " << x << std::endl;
		}

		void inOrder() const{
		//	std::cout << "tree with size: " << this->_size << std::endl; // _size кол-во нод в дереве без пустых нод
			traversal(this->root);
		}

		void print(Node<T>* root, int deep)
		{
			if (root != NULL && root != TNULL) {
				print(root->right, deep + 1);
				if (root->color == 1)
					std::cout << "\e[34m";
				else if (root->color == 0)
					std::cout << "\e[33m";
				for (int i = 0; i < deep; i++)
					std::cout << "    ";
				if (root != this->TNULL )
					std::cout << root->data.first << "\e[0m" << "\n";
				print(root->left, deep + 1);
			}
			std::cout << "\e[0m";
		}

		void show()
		{ std::cout << this->root->data;
			print(this->root, 10); }
	};

}

#endif //FT_CONTAINERS_RBTREE_HPP
