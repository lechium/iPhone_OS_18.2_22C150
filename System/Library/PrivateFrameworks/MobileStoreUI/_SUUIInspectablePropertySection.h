//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _SUUIInspectablePropertySection : NSObject
{
    NSString *_friendlyName;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002fd749
@property(readonly, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
- (id)init;	// IMP=0x00000000002fd6d0

@end
