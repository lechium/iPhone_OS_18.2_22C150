//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Announce/NSObject-Protocol.h>

@class NSUUID;

@protocol ANTonePlayerServiceInterface <NSObject>
- (void)playTone:(unsigned long long)arg1 audioSessionID:(unsigned int)arg2 endpointUUID:(NSUUID *)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

