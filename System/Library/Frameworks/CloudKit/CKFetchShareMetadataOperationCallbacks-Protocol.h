//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKOperationCallbacks-Protocol.h>

@class CKShareMetadata, NSError, NSURL;

@protocol CKFetchShareMetadataOperationCallbacks <CKOperationCallbacks>
- (void)handleShareMetadataFetchForURL:(NSURL *)arg1 shareMetadata:(CKShareMetadata *)arg2 error:(NSError *)arg3;
@end

