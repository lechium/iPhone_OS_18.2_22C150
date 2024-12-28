//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CUIThemeSchemaLayer : NSObject
{
    NSArray *_renditions;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
}

+ (id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;	// IMP=0x0060000000091dd3
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *renditions; // @synthesize renditions=_renditions;
- (void)calculateColumLefts:(id *)arg1 rowTops:(id *)arg2 totalSize:(struct CGSize *)arg3 forPartFeatures:(unsigned long long)arg4;	// IMP=0x0000000000091f16
- (double)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id *)arg2;	// IMP=0x0000000000091e16
- (id)description;	// IMP=0x0000000000091d2f
- (void)dealloc;	// IMP=0x0000000000091cd8
- (id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned long long)arg3;	// IMP=0x0000000000091c4c

@end
