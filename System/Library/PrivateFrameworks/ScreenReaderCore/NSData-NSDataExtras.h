//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (NSDataExtras)
+ (id)dataWithCGPoint:(struct CGPoint)arg1;	// IMP=0x0050000000007a4a
+ (id)dataWithCGSize:(struct CGSize)arg1;	// IMP=0x00500000000079c4
+ (id)dataWithCGRect:(struct CGRect)arg1;	// IMP=0x005000000000793e
+ (id)dataWithPSN:(struct ProcessSerialNumber)arg1;	// IMP=0x00500000000078c3
+ (id)dataWithRange:(struct _NSRange)arg1;	// IMP=0x005000000000783b
- (struct CGPoint)CGPointValue;	// IMP=0x0010000000007a86
- (struct CGSize)CGSizeValue;	// IMP=0x0010000000007a00
- (struct CGRect)CGRectValue;	// IMP=0x0010000000007969
- (struct ProcessSerialNumber)psn;	// IMP=0x00100000000078fc
- (struct _NSRange)range;	// IMP=0x0010000000007878
@end

