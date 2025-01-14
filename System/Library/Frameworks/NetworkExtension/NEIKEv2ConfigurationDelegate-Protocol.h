//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NEIKEv2ChildSAConfiguration, NEIKEv2Session, NEIKEv2SessionConfiguration;

@protocol NEIKEv2ConfigurationDelegate <NSObject>
- (void)sessionFailedBeforeRequestingConfiguration:(NEIKEv2Session *)arg1;
- (void)requestConfigurationForSession:(NEIKEv2Session *)arg1 sessionConfig:(NEIKEv2SessionConfiguration *)arg2 childConfig:(NEIKEv2ChildSAConfiguration *)arg3 validateAuthBlock:(_Bool (^)(NEIKEv2SessionConfiguration *))arg4 responseBlock:(void (^)(NEIKEv2SessionConfiguration *, NEIKEv2ChildSAConfiguration *, struct NEVirtualInterface_s *))arg5;
@end

