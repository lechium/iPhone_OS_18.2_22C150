//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSISVariable.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSISInlineStorageVariable : NSISVariable
{
    NSString *_name;	// 64 = 0x40
    int _valueRestriction;	// 72 = 0x48
    _Bool _shouldBeMinimized;	// 76 = 0x4c
    _Bool _valueIsUserObservable;	// 77 = 0x4d
}

@property _Bool valueIsUserObservable; // @synthesize valueIsUserObservable=_valueIsUserObservable;
@property _Bool shouldBeMinimized; // @synthesize shouldBeMinimized=_shouldBeMinimized;
@property int valueRestriction; // @synthesize valueRestriction=_valueRestriction;
@property(copy) NSString *name; // @synthesize name=_name;
- (oneway void)dealloc;	// IMP=0x00000000000017b0
- (int)nsis_orientationHintForVariable:(id)arg1;	// IMP=0x00000000000017a8
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;	// IMP=0x0000000000001798
- (id)nsis_descriptionOfVariable:(id)arg1;	// IMP=0x0000000000001786
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;	// IMP=0x0000000000001780
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000016a6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000015a9
- (id)markedConstraint;	// IMP=0x00000000000015a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

