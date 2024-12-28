//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface RAPPlaceCorrectableFlag : NSObject
{
    NSMapTable *_observers;	// 8 = 0x8
    _Bool _value;	// 16 = 0x10
    _Bool _originalValue;	// 17 = 0x11
    long long _kind;	// 24 = 0x18
    NSString *_localizedTitle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000037a40c
@property(readonly, nonatomic) _Bool originalValue; // @synthesize originalValue=_originalValue;
@property(nonatomic) _Bool value; // @synthesize value=_value;
@property(readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property(readonly, nonatomic, getter=isEdited) _Bool edited;
- (void)revertCorrections;	// IMP=0x001000000037a3b0
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)initWithKind:(long long)arg1 originalValue:(_Bool)arg2;	// IMP=0x0010000000379ea5
- (void)_invokeChangeHandlers;	// IMP=0x0010000000379d21
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000379d0b
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000379c54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
