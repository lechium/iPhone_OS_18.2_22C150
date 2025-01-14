//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GeoRequestCounterInterfaces : NSObject
{
    unsigned long long _selected;	// 8 = 0x8
}

- (unsigned long long)currentInterfaces;	// IMP=0x002000000036ca1b
- (long long)rowCount;	// IMP=0x001000000036ca0b
- (void)setSelection:(id)arg1;	// IMP=0x001000000036c8a8
- (id)stringForRow:(long long)arg1;	// IMP=0x001000000036c856
- (id)currentSelection;	// IMP=0x001000000036c7cf
- (id)currentSelectionString;	// IMP=0x001000000036c77d
- (_Bool)supportsMultipleSelection;	// IMP=0x001000000036c775
- (id)init;	// IMP=0x001000000036c6b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

