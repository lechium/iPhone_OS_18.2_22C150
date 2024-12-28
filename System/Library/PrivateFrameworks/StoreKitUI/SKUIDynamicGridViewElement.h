//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKUIDynamicGridViewElement
{
    _Bool _hasValidTemplateDefinitionMap;	// 8 = 0x8
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;	// 16 = 0x10
    long long _minimumEntityCountForSections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b937b
@property(readonly, nonatomic) long long minimumEntityCountForSections; // @synthesize minimumEntityCountForSections=_minimumEntityCountForSections;
- (void)_unfilteredEnumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001b9308
- (id)_templateDefinitionTypeToModeValueMap;	// IMP=0x00000000001b90f7
- (id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2;	// IMP=0x00000000001b900f
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2;	// IMP=0x00000000001b8ddf
@property(readonly, nonatomic, getter=isMalformed) _Bool malformed;
@property(readonly, nonatomic) _Bool hasSectionHeaders;
- (_Bool)allowsMultipleSelectionDuringEditing;	// IMP=0x00000000001b8b51
- (long long)pageComponentType;	// IMP=0x00000000001b8b46
- (_Bool)isDynamicContainer;	// IMP=0x00000000001b8b3e
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000001b8a82
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000001b8957

@end
