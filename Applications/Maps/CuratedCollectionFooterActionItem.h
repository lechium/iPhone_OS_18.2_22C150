//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CuratedCollectionFooterActionItem : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_glyph;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000568200
@property(copy, nonatomic) NSString *glyph; // @synthesize glyph=_glyph;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 title:(id)arg2 glyph:(id)arg3;	// IMP=0x00100000005680fa

@end

