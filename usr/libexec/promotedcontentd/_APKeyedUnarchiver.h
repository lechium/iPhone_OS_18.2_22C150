//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSKeyedUnarchiver.h>

@class NSArray;

@interface _APKeyedUnarchiver : NSKeyedUnarchiver
{
    NSArray *_ignoreKeys;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000013aa1f
@property(retain, nonatomic) NSArray *ignoreKeys; // @synthesize ignoreKeys=_ignoreKeys;
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x001000000013a95a

@end
