//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@class LACClientInfo, NSData, NSDictionary;
@protocol LACXPCClient;

@protocol LACClientInfoProviding <NSObject>
+ (_Bool)processId:(int)arg1 toAuditToken:(CDStruct_6ad76789 *)arg2;
+ (NSData *)applicationIdentityDataForProcessId:(int)arg1;
+ (NSData *)auditTokenDataForProcessId:(int)arg1;
+ (LACClientInfo *)infoForXPCClient:(id <LACXPCClient>)arg1 evaluationOptions:(NSDictionary *)arg2;
+ (LACClientInfo *)infoForXPCClient:(id <LACXPCClient>)arg1;
@end
