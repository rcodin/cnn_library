#include <layer.hpp>

class Layer {
	protected:
		enum layer_type type;
		float *weights;
		float *biases;
	public:
		void forward(float *in, float *out, std::vector<int> data_conf);
};