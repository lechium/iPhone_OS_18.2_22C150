//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClipServices/NSObject-Protocol.h>

@class CPSClipMetadata, NSDictionary, NSError, NSNumber, NSURL;

@protocol CPSSessionObserving <NSObject>

@optional
- (void)didRetrieveBusinessIcon:(NSURL *)arg1;
- (void)didFinishTestingAtTime:(double)arg1;
- (void)didRetrieveHeroImage:(NSURL *)arg1;
- (void)didRetrieveApplicationIcon:(NSURL *)arg1;
- (void)didInstallApplicationPlaceholder;
- (void)didUpdateInstallProgress:(NSNumber *)arg1;
- (void)didFinishLoadingWithError:(NSError *)arg1;
- (void)didUpdateMetadata:(CPSClipMetadata *)arg1;
- (void)didDetermineAvailability:(_Bool)arg1 options:(NSDictionary *)arg2;
@end

