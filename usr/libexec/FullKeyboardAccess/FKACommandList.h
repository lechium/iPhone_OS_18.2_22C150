//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FKACommandList : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    NSString *_footerText;	// 24 = 0x18
}

+ (id)listWithTitle:(id)arg1 items:(id)arg2 footerText:(id)arg3;	// IMP=0x004000000000f164
- (void).cxx_destruct;	// IMP=0x002000000000f2e9
@property(readonly, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 items:(id)arg2 footerText:(id)arg3;	// IMP=0x001000000000f1f0

@end

