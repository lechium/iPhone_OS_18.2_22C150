//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC21SiriInformationSearch14PommesResponse, _TtC21SiriInformationSearch22PommesSearchRequestXPC;

@protocol _TtP21SiriInformationSearch25PommesSearchOrchestrating_
- (void)invalidateWithCachedResponse:(_TtC21SiriInformationSearch14PommesResponse *)arg1;
- (void)searchInfiEntityWithRequest:(_TtC21SiriInformationSearch22PommesSearchRequestXPC *)arg1 completionHandler:(void (^)(_TtC21SiriInformationSearch14PommesResponse *, NSError *))arg2;
@end
