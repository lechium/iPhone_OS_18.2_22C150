//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSValue, UIImage;

__attribute__((visibility("hidden")))
@interface _UISearchBarAppearanceStorage : NSObject
{
    NSMutableDictionary *searchFieldBackgroundImages;	// 8 = 0x8
    NSValue *searchFieldPositionAdjustment;	// 16 = 0x10
    NSMutableDictionary *iconImages;	// 24 = 0x18
    UIImage *separatorImage;	// 32 = 0x20
    UIImage *scopeBarBackgroundImage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004cb56b
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage; // @synthesize scopeBarBackgroundImage;
@property(retain, nonatomic) UIImage *separatorImage; // @synthesize separatorImage;
@property(retain, nonatomic) NSValue *searchFieldPositionAdjustment; // @synthesize searchFieldPositionAdjustment;
- (id)imageForIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x00000000004cb441
- (void)setImage:(id)arg1 forIcon:(long long)arg2 state:(unsigned long long)arg3;	// IMP=0x00000000004cb384
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;	// IMP=0x00000000004cb31d
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000004cb240

@end

