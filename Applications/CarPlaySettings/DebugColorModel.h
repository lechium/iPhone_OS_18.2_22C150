//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface DebugColorModel : NSObject
{
    UIColor *_color;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (id)modelWithColor:(id)arg1 name:(id)arg2;	// IMP=0x004000000000a971
- (void).cxx_destruct;	// IMP=0x002000000000aa31
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;

@end
