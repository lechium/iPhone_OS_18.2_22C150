//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (NUDigest)
+ (id)nu_valueWithCGPoint:(struct CGPoint)arg1;	// IMP=0x002000000003ff20
+ (id)nu_valueWithPixelPoint:(CDStruct_912cb5d2)arg1;	// IMP=0x002000000003feda
+ (id)nu_valueWithCGRect:(struct CGRect)arg1;	// IMP=0x002000000003fea6
+ (id)nu_valueWithPixelRect:(CDStruct_0973877e)arg1;	// IMP=0x002000000003fe72
- (void)nu_updateDigest:(id)arg1;	// IMP=0x001000000001434b
@property(readonly) struct CGPoint nu_CGPoint;
@property(readonly) struct CGRect nu_CGRect;
@property(readonly) CDStruct_912cb5d2 nu_pixelPoint;
@property(readonly) CDStruct_0973877e nu_pixelRect;
@end
