//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VKCElementCollection
{
    NSString *_title;	// 8 = 0x8
    NSArray *__children;	// 16 = 0x10
}

+ (id)collectionWithTitle:(id)arg1 children:(id)arg2 parent:(id)arg3;	// IMP=0x0060000000073fdf
+ (id)collectionWithTitle:(id)arg1 elementInfoText:(id)arg2 parent:(id)arg3;	// IMP=0x0060000000073ee5
- (void).cxx_destruct;	// IMP=0x0000000000074243
@property(retain, nonatomic) NSArray *_children; // @synthesize _children=__children;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)children;	// IMP=0x00000000000741e7
- (id)stringValue;	// IMP=0x00000000000741d5

@end

