/*
 * This file is part of Gorillas.
 *
 *  Gorillas is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  Gorillas is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Gorillas in the file named 'COPYING'.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

//
//  SwipeLayer.h
//  Gorillas
//
//  Created by Maarten Billemont on 15/02/09.
//  Copyright 2008-2009, lhunath (Maarten Billemont). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cocos2d.h"


@interface SwipeLayer : Layer {

    NSInvocation    *invocation;
    
    IntervalAction  *swipeAction;
    cpVect          swipeFrom;
    cpVect          swipeTo;
    cpVect          swipeStart;
    BOOL            swipeForward;
    BOOL            swiped;
}

+(id) nodeWithTarget:(id)t selector:(SEL)s;

-(id) initWithTarget:(id)t selector:(SEL)s;

-(void) setSwipeAreaFrom:(cpVect)f to:(cpVect)t;
-(void) setTarget:(id)t selector:(SEL)s;
-(void) swipeDone:(id)sender;

@end