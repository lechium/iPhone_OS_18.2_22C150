//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSString, NSUUID;

@protocol NWNetworkAgent
+ (id)agentFromData:(NSData *)arg1;
+ (NSString *)agentType;
+ (NSString *)agentDomain;
@property(nonatomic, getter=isVoluntary) _Bool voluntary;
@property(nonatomic, getter=isUserActivated) _Bool userActivated;
@property(nonatomic, getter=isKernelActivated) _Bool kernelActivated;
@property(nonatomic, getter=isActive) _Bool active;
@property(copy, nonatomic) NSUUID *agentUUID;
@property(copy, nonatomic) NSString *agentDescription;
- (NSData *)copyAgentData;

@optional
@property(nonatomic) _Bool updateClientsImmediately;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool requiresAssert;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool supportsResolveRequests;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool supportsBrowseRequests;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) _Bool supportsListenRequests;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic, getter=isNexusProvider) _Bool nexusProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisNexusProvider

@property(nonatomic, getter=isNetworkProvider) _Bool networkProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisNetworkProvider

@property(nonatomic, getter=isSpecificUseOnly) _Bool specificUseOnly;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisSpecificUseOnly

- (void)closeNexusWithOptions:(NSDictionary *)arg1;
- (_Bool)requestNexusWithOptions:(NSDictionary *)arg1;
- (void)tokenLowWaterMarkReached;
- (_Bool)reportError:(int)arg1 withOptions:(NSDictionary *)arg2;
- (void)unassertAgentWithOptions:(NSDictionary *)arg1;
- (_Bool)assertAgentWithOptions:(NSDictionary *)arg1;
- (_Bool)startAgentWithOptions:(NSDictionary *)arg1;
@end
