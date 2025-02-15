//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface TMLDictionary : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x0060000000075df9
- (void).cxx_destruct;	// IMP=0x00000000000762bd
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void)removeAllObjects;	// IMP=0x000000000007624b
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000076167
- (id)union:(id)arg1;	// IMP=0x0000000000076109
- (void)set:(id)arg1 value:(id)arg2;	// IMP=0x0000000000075fbd
- (id)get:(id)arg1;	// IMP=0x0000000000075fa7
@property(readonly, nonatomic) NSArray *keys;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x0000000000075f0f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000075ea7

@end

