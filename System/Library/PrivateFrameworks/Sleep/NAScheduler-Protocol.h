//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/NSObject-Protocol.h>

@protocol NACancelable;

@protocol NAScheduler <NSObject>
- (id <NACancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <NACancelable>)performCancelableBlock:(void (^)(NACancelationToken *))arg1;
- (void)performBlock:(void (^)(void))arg1;
@end

