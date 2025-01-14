//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class IDSServerBagLoadedContents, NSDictionary, NSError;

@protocol IDSServerBagContentProvider <NSObject>
@property(readonly, nonatomic) _Bool isServerAvailable;
@property(readonly, nonatomic) _Bool isLoading;
@property(copy, nonatomic) CDUnknownBlockType contentsUpdatedBlock;
- (NSError *)clearOverrideValues;
- (NSError *)writeOverrideValues:(NSDictionary *)arg1;
- (NSDictionary *)loadOverrideValuesIfPresent;
- (NSError *)updateContentsIfPossibleShouldForce:(_Bool)arg1;
- (IDSServerBagLoadedContents *)currentLoadedContentsWithError:(id *)arg1;
@end

