//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtension.h>

@class NSArray;

@interface NSExtension (UserNotificationsUI)
@property(readonly, nonatomic, getter=un_isUserInteractionEnabled) _Bool un_userInteractionEnabled;
@property(readonly, nonatomic, getter=un_isDefaultTitleOverridden) _Bool un_defaultTitleOverridden;
@property(readonly, nonatomic, getter=un_isDefaultContentHidden) _Bool un_defaultContentHidden;
@property(readonly, nonatomic) double un_effectiveContentSizeRatio;
- (id)_un_contentSizeRatio;	// IMP=0x0030000000002d36
@property(readonly, copy, nonatomic) NSArray *un_supportedCategoryIdentifiers;
@property(readonly, copy, nonatomic) NSArray *un_allowedSourceIdentifiers;
- (id)_un_customSectionIdentifiers;	// IMP=0x00300000000029a0
- (id)_un_extensionContainerBundleIdentifier;	// IMP=0x00300000000027dd
@end

