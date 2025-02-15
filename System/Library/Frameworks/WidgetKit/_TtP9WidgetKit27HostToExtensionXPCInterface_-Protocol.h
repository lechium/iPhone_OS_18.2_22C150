//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, _TtC9WidgetKit22WidgetRelevanceRequest, _TtC9WidgetKit25ModifyControlStateRequest, _TtC9WidgetKit33ControlsConfigurationXPCContainer;

@protocol _TtP9WidgetKit27HostToExtensionXPCInterface_
- (void)pushTokensDidChange:(_TtC9WidgetKit33ControlsConfigurationXPCContainer *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getControlTemplatesWithRequests:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setControlState:(_TtC9WidgetKit25ModifyControlStateRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)performCleanup;
- (void)invalidate;
- (void)getWidgetRelevancesWithRequest:(_TtC9WidgetKit22WidgetRelevanceRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getActivitiesWithRequests:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getAppIntentsXPCListenerEndpointWithCompletion:(void (^)(NSXPCListenerEndpoint *, NSData *, NSError *))arg1;
- (void)getTimelinesWithRequests:(NSArray *)arg1 isPreview:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)getPlaceholdersWithRequests:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)attachPreviewAgentWithFrameworkPath:(NSString *)arg1 endpoint:(id)arg2 handler:(void (^)(BSAuditToken *))arg3;
- (void)handleURLSessionEventsFor:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)getAllCurrentDescriptorsWithCompletion:(void (^)(_TtC9WidgetKit21DescriptorFetchResult *))arg1;
- (void)getCurrentDescriptorsWithCompletion:(void (^)(NSArray *))arg1;
@end

