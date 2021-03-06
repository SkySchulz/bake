/* Copyright (c) 2010-2019 Sander Mertens
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef UT_THREAD_POSIX_H_
#define UT_THREAD_POSIX_H_


#ifdef __cplusplus
extern "C" {
#endif

typedef pthread_key_t ut_tls;

typedef struct ut_mutex_s {
    pthread_mutex_t mutex;
} ut_mutex_s;

typedef struct ut_rwmutex_s {
    pthread_rwlock_t mutex;
} ut_rwmutex_s;

typedef struct ut_cond_s {
    pthread_cond_t cond;
} ut_cond_s;

typedef struct ut_sem_s {
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int value;
} ut_sem_s;

#define UT_MUTEX_INIT {PTHREAD_MUTEX_INITIALIZER}
#define UT_RWMUTEX_INIT {PTHREAD_RWLOCK_INITIALIZER}
#define UT_COND_INIT {PTHREAD_COND_INITIALIZER}
#define UT_SEM_INIT {PTHREAD_MUTEX_INITIALIZER, PTHREAD_COND_INITIALIZER}

#ifdef __cplusplus
}
#endif

#endif /* UT_THREAD_POSIX_H_ */
