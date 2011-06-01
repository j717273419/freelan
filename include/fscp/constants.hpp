/*
 * libfscp - C++ portable OpenSSL cryptographic wrapper library.
 * Copyright (C) 2010-2011 Julien Kauffmann <julien.kauffmann@freelan.org>
 *
 * This file is part of libfscp.
 *
 * libfscp is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3 of
 * the License, or (at your option) any later version.
 *
 * libfscp is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 * You must obey the GNU General Public License in all respects
 * for all of the code used other than OpenSSL.  If you modify
 * file(s) with this exception, you may extend this exception to your
 * version of the file(s), but you are not obligated to do so.  If you
 * do not wish to do so, delete this exception statement from your
 * version.  If you delete this exception statement from all source
 * files in the program, then also delete it here.
 *
 * If you intend to use libfscp in a commercial software, please
 * contact me : we may arrange this for a small fee or no fee at all,
 * depending on the nature of your project.
 */

/**
 * \file constants.hpp
 * \author Julien Kauffmann <julien.kauffmann@freelan.org>
 * \brief The constants.
 */

#ifndef FSCP_CONSTANTS_HPP
#define FSCP_CONSTANTS_HPP

#include <cryptoplus/cipher/cipher_algorithm.hpp>
#include <cryptoplus/hash/message_digest_algorithm.hpp>

#include <stdint.h>

#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

namespace fscp
{
	/**
	 * \brief The session number type.
	 */
	typedef uint32_t session_number_type;

	/**
	 * \brief The sequence number type.
	 */
	typedef uint16_t sequence_number_type;

	/**
	 * \brief The current protocol version.
	 */
	const unsigned char CURRENT_PROTOCOL_VERSION = 1;

	/**
	 * \brief The different message types.
	 */
	enum message_type
	{
		MESSAGE_TYPE_HELLO_REQUEST = 0x00,
		MESSAGE_TYPE_HELLO_RESPONSE = 0x01,
		MESSAGE_TYPE_PRESENTATION = 0x02,
		MESSAGE_TYPE_SESSION_REQUEST = 0x03,
		MESSAGE_TYPE_SESSION = 0x04,
		MESSAGE_TYPE_DATA = 0x05
	};

	/**
	 * \brief The cipher algorithm.
	 */
	const int CIPHER_ALGORITHM = NID_aes_256_cbc;

	/**
	 * \brief The cipher algorithm used to generate initialization vectors.
	 */
	const int IV_CIPHER_ALGORITHM = NID_aes_256_ecb;

	/**
	 * \brief The message digest algorithm.
	 */
	const int MESSAGE_DIGEST_ALGORITHM = NID_sha256;

	/**
	 * \brief The session keep-alive period.
	 */
	const boost::posix_time::time_duration SESSION_KEEP_ALIVE_PERIOD = boost::posix_time::seconds(10);

	/**
	 * \brief The session timeout.
	 */
	const boost::posix_time::time_duration SESSION_TIMEOUT = SESSION_KEEP_ALIVE_PERIOD * 3;
}

#endif /* FSCP_CONSTANTS_HPP */
