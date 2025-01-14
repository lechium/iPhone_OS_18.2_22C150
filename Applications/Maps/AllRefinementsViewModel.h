//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface AllRefinementsViewModel : NSObject
{
    _Bool _viewTakesFullHeight;	// 8 = 0x8
    NSString *_displayName;	// 16 = 0x10
    NSArray *_sections;	// 24 = 0x18
    NSNumber *_tappedBarButtonIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000befc70
@property(retain, nonatomic) NSNumber *tappedBarButtonIndex; // @synthesize tappedBarButtonIndex=_tappedBarButtonIndex;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) _Bool viewTakesFullHeight; // @synthesize viewTakesFullHeight=_viewTakesFullHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000befb37
- (id)initWithSections:(id)arg1 displayName:(id)arg2 viewTakesFullHeight:(_Bool)arg3;	// IMP=0x0010000000befa94

@end

