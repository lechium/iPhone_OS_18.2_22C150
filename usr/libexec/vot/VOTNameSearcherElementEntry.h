//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VOTElement;

@interface VOTNameSearcherElementEntry : NSObject
{
    VOTElement *_element;	// 8 = 0x8
    NSString *_itemChooserName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000004330
@property(retain, nonatomic) NSString *itemChooserName; // @synthesize itemChooserName=_itemChooserName;
@property(retain, nonatomic) VOTElement *element; // @synthesize element=_element;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000424a
- (void)select;	// IMP=0x0010000000004193
- (void)focus;	// IMP=0x001000000000418d
- (id)name;	// IMP=0x001000000000417b
- (id)initWithElement:(id)arg1;	// IMP=0x00100000000040c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

