#include <cvd/videosource.h>
#include <cvd/Linux/v4l1buffer.h>

namespace CVD{

	template <> VideoBuffer<byte>* makeV4L1Buffer(const std::string& , const ImageRef&)
	{
		throw VideoSourceException("V4L1Buffer is not compiled in to libcvd.");
	}

	template <> VideoBuffer<yuv422>* makeV4L1Buffer(const std::string& , const ImageRef&)
	{
		throw VideoSourceException("V4L1Buffer is not compiled in to libcvd.");
	}
	template <> VideoBuffer<Rgb<byte> >* makeV4L1Buffer(const std::string& , const ImageRef&)
	{
		throw VideoSourceException("V4L1Buffer is not compiled in to libcvd.");
	}

	template <> VideoBuffer<bayer_grbg>* makeV4L1Buffer(const std::string& , const ImageRef&)
	{
		throw VideoSourceException("V4L1Buffer is not compiled in to libcvd.");
	}
}
