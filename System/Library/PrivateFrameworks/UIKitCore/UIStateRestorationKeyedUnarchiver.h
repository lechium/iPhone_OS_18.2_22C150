//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSKeyedUnarchiver.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIStateRestorationKeyedUnarchiver : NSKeyedUnarchiver
{
    NSDictionary *_defaultValues;	// 8 = 0x8
}

- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000001405683
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000001405098
- (id)decodeObjectForKey:(id)arg1;	// IMP=0x0000000001405026
- (void)dealloc;	// IMP=0x0000000001404fe4
- (id)initForReadingWithData:(id)arg1 defaultValues:(id)arg2 requiresSecureCoding:(_Bool)arg3;	// IMP=0x0000000001404f59

@end
