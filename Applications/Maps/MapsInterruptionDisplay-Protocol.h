//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol MapsInterruptionDisplay <NSObject>
- (_Bool)dismissCurrentInterruptionOfKind:(long long)arg1;
- (void)dismissInterruption;
- (void (^)(_Bool))presentInterruptionOfKind:(long long)arg1 userInfo:(NSDictionary *)arg2 completionHandler:(void (^)(long long))arg3;
@end

