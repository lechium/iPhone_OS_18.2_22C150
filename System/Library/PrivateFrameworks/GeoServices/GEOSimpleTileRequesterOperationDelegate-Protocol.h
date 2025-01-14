//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSData, NSError, _GEOSimpleTileRequesterOperation;

@protocol GEOSimpleTileRequesterOperationDelegate <NSObject>
- (NSArray *)additionalNetworkEventAnalyticsStatesForKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldReportSuccessNetworkEventForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldReportErrorNetworkEventWithRertryForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldReportErrorNetworkEventForTileKey:(const struct _GEOTileKey *)arg1;
- (NSData *)verifyDataIntegrity:(NSData *)arg1 checksumMethod:(int)arg2;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldAllowEmptyDataForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldDownloadToDiskForTileKey:(const struct _GEOTileKey *)arg1 estimatedDataSize:(unsigned long long)arg2;
- (void)operationFailed:(_GEOSimpleTileRequesterOperation *)arg1 error:(NSError *)arg2;
- (void)operationFinished:(_GEOSimpleTileRequesterOperation *)arg1;
@end

