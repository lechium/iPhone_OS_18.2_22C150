//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BMAtomBatchMaxCount : NSObject
{
    unsigned long long _maxCount;	// 8 = 0x8
    unsigned long long _atomCount;	// 16 = 0x10
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000006f84
- (void)didAddAtomWithData:(id)arg1;	// IMP=0x0010000000006f7a
- (_Bool)canAddAtomWithData:(id)arg1;	// IMP=0x0010000000006f69
- (id)initWithMaxCount:(unsigned long long)arg1;	// IMP=0x0010000000006f24

@end

