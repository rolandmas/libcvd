#include <cvd/videosource.h>

namespace CVD{

	template <> VideoBuffer<byte>* makeDVBuffer2(int, ImageRef, float, ImageRef)
	{
		throw VideoSourceException("DVBuffer3 is not compiled in to libcvd.");
	}

	template <> VideoBuffer<unsigned short>* makeDVBuffer2(int, ImageRef, float, ImageRef)
	{
		throw VideoSourceException("DVBuffer3 is not compiled in to libcvd.");
	}

	template <> VideoBuffer<yuv411>* makeDVBuffer2(int, ImageRef, float, ImageRef)
	{
		throw VideoSourceException("DVBuffer3 is not compiled in to libcvd.");
	}

	template <> VideoBuffer<yuv422>* makeDVBuffer2(int, ImageRef, float, ImageRef)
	{
		throw VideoSourceException("DVBuffer3 is not compiled in to libcvd.");
	}

	template <> VideoBuffer<bayer_grbg>* makeDVBuffer2(int, ImageRef, float, ImageRef)
	{
		throw VideoSourceException("DVBuffer3 is not compiled in to libcvd.");
	}

	template <> VideoBuffer<bayer_gbrg>* makeDVBuffer2(int, ImageRef, float, ImageRef)
	{
		throw VideoSourceException("DVBuffer3 is not compiled in to libcvd.");
	}

	template <> VideoBuffer<bayer_rggb>* makeDVBuffer2(int, ImageRef, float, ImageRef)
	{
		throw VideoSourceException("DVBuffer3 is not compiled in to libcvd.");
	}

	template <> VideoBuffer<bayer_bggr>* makeDVBuffer2(int, ImageRef, float, ImageRef)
	{
		throw VideoSourceException("DVBuffer3 is not compiled in to libcvd.");
	}

	template <> VideoBuffer<Rgb<byte> >* makeDVBuffer2(int, ImageRef, float, ImageRef)
	{
		throw VideoSourceException("DVBuffer3 is not compiled in to libcvd.");
	}

}
