//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSUUID;

@protocol CLEEDRequestInterface
- (void)streamingSessionEndedForRequestID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)mediaUploadList:(NSSet *)arg1 forRequestID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (void)handleResponse:(_Bool)arg1 forRequest:(NSUUID *)arg2 completion:(void (^)(CLEEDRequest *, NSError *))arg3;
- (void)fetchMitigationsWithCompletion:(void (^)(CLEEDMitigation *, NSError *))arg1;
- (void)fetchCurrentMediaUploadRequestWithCompletion:(void (^)(CLEEDUploadRequest *, NSError *))arg1;
- (void)fetchCurrentStreamingRequestWithCompletion:(void (^)(CLEEDStreamingRequest *, NSError *))arg1;
- (void)fetchAllPendingRequestsWithCompletion:(void (^)(NSSet *, NSError *))arg1;
@end

