/* This file contains the data structure definition of
 * queue that contains strings.
 */

#ifndef _QUEUE_H
#define _QUEUE_H

#include "lib/contracts.h"
#include "lib/xalloc.h"
#include "stdbool.h"
#include "stdlib.h"
#include "string.h"

typedef char * Queue_elem;

typedef struct queue {
  Queue_elem *buf;
  size_t len;
  size_t limit;
} *Queue;

bool is_Queue(Queue q);
Queue Queue_new();

// EFFECT: free the given Queue
// RETURNS: all elements in the given queue as an array
Queue_elem* Queue_dealloc(Queue q);
void Queue_insert(Queue q, Queue_elem ele);

#endif
