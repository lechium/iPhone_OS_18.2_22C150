//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITabBarItem.h>

@class MISSING_TYPE, NSString;

@interface _TtC5Files13DOCTabBarItem : UITabBarItem
{
    MISSING_TYPE *tab;	// 8 = 0x8
}

+ (id)itemWithTab:(unsigned long long)arg1;	// IMP=0x00200000001f43e0
+ (id)tabIdentifierForTab:(unsigned long long)arg1;	// IMP=0x00100000001f4330
- (id)initWithCoder:(id)arg1;	// IMP=0x00400000001f4930
- (id)init;	// IMP=0x00100000001f48f0
@property(nonatomic, readonly) NSString *displayTitle;
@property(nonatomic, readonly) NSString *description;
- (id)floatingSwitcherActionRepresentationWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f4400
@property(nonatomic, readonly) NSString *tabIdentifier;
@property(nonatomic) unsigned long long tab; // @synthesize tab;

@end

