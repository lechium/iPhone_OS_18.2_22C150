//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WKWebView, _TtC5SOSUI16SOSUIWebRTCState;

@protocol _TtP5SOSUI17SOSUIWebRTCClient_
- (void)networkInterfacesDidChangeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)goToErrorWithRetryable:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setFrameRate:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setDebugConnection:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setPausedString:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setMaximumBitrate:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setMinimumBitrate:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setIceRestartRetryCount:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setIceRestartTimeout:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setPoorConnectionGracePeriod:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setPoorConnectionThreshold:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
@property(nonatomic, readonly) WKWebView *webView;
@property(nonatomic, readonly) _TtC5SOSUI16SOSUIWebRTCState *state;
- (void)getCapabilitiesWithCompletionHandler:(void (^)(_TtC5SOSUI24SOSUIWebtRTCCapabilities *, NSError *))arg1;
- (void)endVideoPreviewWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setZoomLevelWithZoom:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)toggleTorchWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)torchOffWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)torchOnWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)flipCameraWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)useRearCameraWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)useFrontCameraWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)unpauseVideoWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)pauseVideoWithPausedString:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)pauseVideoWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)endVideoStreamWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)startVideoStreamWithEndpoint:(NSString *)arg1 token:(NSString *)arg2 trickle:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)startVideoStreamWithEndpoint:(NSString *)arg1 token:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)startVideoStreamWithEndpoint:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startVideoPreviewWithCameraFacing:(long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)startVideoPreviewWithCompletionHandler:(void (^)(NSError *))arg1;
@end

