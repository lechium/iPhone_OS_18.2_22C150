//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Stickers/CNTimeProvider-Protocol.h>
#import <Stickers/NSObject-Protocol.h>

@protocol CNCancelable;

@protocol CNScheduler <CNTimeProvider, NSObject>
- (id <CNCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2 qualityOfService:(unsigned long long)arg3;
- (id <CNCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <CNCancelable>)performCancelableBlock:(void (^)(CNCancelationToken *))arg1 qualityOfService:(unsigned long long)arg2;
- (id <CNCancelable>)performCancelableBlock:(void (^)(CNCancelationToken *))arg1;
- (void)performBlock:(void (^)(void))arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(void (^)(void))arg1;
@end

