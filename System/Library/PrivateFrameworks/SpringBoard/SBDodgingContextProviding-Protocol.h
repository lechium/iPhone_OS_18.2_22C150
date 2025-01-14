//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBChainableModifierContext-Protocol.h>

@class NSString, SBDodgingItemPreference, SBDodgingModel;

@protocol SBDodgingContextProviding <SBChainableModifierContext>
- (double)spaceBetweenIdentifiers;
- (SBDodgingItemPreference *)preferenceForIdentifier:(NSString *)arg1;
- (long long)interfaceOrientation;
- (struct CGRect)contentViewBounds;
- (SBDodgingModel *)model;
@end

