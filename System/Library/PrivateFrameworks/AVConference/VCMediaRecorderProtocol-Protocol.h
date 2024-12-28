//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary;
@protocol VCMediaRecorderDelegate;

@protocol VCMediaRecorderProtocol <NSObject>
@property(readonly, nonatomic) _Bool usesClientToken;
@property(readonly, nonatomic) unsigned int capabilities;
- (void)invalidate;
- (void)registerClient;
- (_Bool)processClientRequest:(NSDictionary *)arg1 error:(id *)arg2;
- (void)setMediaRecorderDelegate:(id <VCMediaRecorderDelegate>)arg1;
@end
