//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface AKAnnotationTheme : NSObject
{
    int _pageTheme;	// 8 = 0x8
}

+ (id)highlightTextColor:(int)arg1;	// IMP=0x006000000001e17e
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2 isUnderline:(_Bool)arg3;	// IMP=0x006000000001e104
+ (id)themeForAnnotationStyle:(int)arg1 pageTheme:(int)arg2;	// IMP=0x006000000001e0c1
+ (id)theme:(int)arg1;	// IMP=0x006000000001e092
+ (id)underlineTheme:(int)arg1;	// IMP=0x006000000001dce6
+ (id)purpleTheme:(int)arg1;	// IMP=0x006000000001d93a
+ (id)pinkTheme:(int)arg1;	// IMP=0x006000000001d58e
+ (id)yellowTheme:(int)arg1;	// IMP=0x006000000001d1e2
+ (id)blueTheme:(int)arg1;	// IMP=0x006000000001ce36
+ (id)greenTheme:(int)arg1;	// IMP=0x006000000001ca8c
+ (id)colorForAnnotationStyle:(int)arg1 propertyName:(id)arg2 pageTheme:(int)arg3;	// IMP=0x006000000001026e
+ (id)colorForThemeItem:(id)arg1 pageTheme:(int)arg2;	// IMP=0x00600000000101a4
+ (id)themeItemForAnnotationStyle:(int)arg1 propertyName:(id)arg2;	// IMP=0x00600000000100af
+ (id)themeDescriptions;	// IMP=0x006000000000ffcf
@property(nonatomic) int pageTheme; // @synthesize pageTheme=_pageTheme;
@property(readonly, nonatomic) int annotationStyle;
@property(readonly, nonatomic) _Bool isUnderline;
@property(readonly, nonatomic) UIFont *noteTextFontInTable;
@property(readonly, nonatomic) UIFont *noteTextFont;
@property(readonly, nonatomic) struct CGSize noteShadowOffset;
@property(readonly, nonatomic) UIColor *noteShadowColor;
@property(readonly, nonatomic) double noteShadowOpacity;
@property(readonly, nonatomic) double noteShadowRadius;
@property(readonly, nonatomic) UIColor *notesSidebarTextColor;
@property(readonly, nonatomic) UIColor *noteMarkerStrikethroughColor;
@property(readonly, nonatomic) UIColor *notesSidebarBarColor;
@property(readonly, nonatomic) UIColor *noteMarkerBorderColor;
@property(readonly, nonatomic) UIColor *noteMarkerFillColor;
@property(readonly, nonatomic) UIColor *highlightColor;
@property(readonly, nonatomic) UIColor *noteTextColor;
@property(readonly, nonatomic) UIColor *noteBorderColor;
@property(readonly, nonatomic) UIColor *noteFillColor;

@end

