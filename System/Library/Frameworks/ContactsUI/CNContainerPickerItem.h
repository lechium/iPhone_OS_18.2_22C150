//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContainerPickerItem : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002c549d
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end
