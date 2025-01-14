//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewElement.h"

@class SUUICollectionDOMFeature;

__attribute__((visibility("hidden")))
@interface SUUIGridViewElement : SUUIViewElement
{
    id _persistenceKey;	// 8 = 0x8
    _Bool _showsEditMode;	// 16 = 0x10
}

+ (id)supportedFeatures;	// IMP=0x00600000000d1039
- (void).cxx_destruct;	// IMP=0x00000000000d1683
@property(readonly, nonatomic) _Bool showsEditMode; // @synthesize showsEditMode=_showsEditMode;
- (long long)_countOfInputCheckboxesWithBaseElement:(id)arg1 limit:(long long)arg2;	// IMP=0x00000000000d1506
@property(readonly, nonatomic) SUUICollectionDOMFeature *collectionFeature;
@property(readonly, nonatomic) _Bool allowsMultipleSelectionDuringEditing;
- (id)persistenceKey;	// IMP=0x00000000000d135a
- (long long)pageComponentType;	// IMP=0x00000000000d134f
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d1238
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000000d111c
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000000d0e9e

@end

