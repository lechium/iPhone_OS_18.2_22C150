//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SUUIDynamicGridViewElement
{
    _Bool _hasValidTemplateDefinitionMap;	// 8 = 0x8
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;	// 16 = 0x10
    long long _minimumEntityCountForSections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000050444
@property(readonly, nonatomic) long long minimumEntityCountForSections; // @synthesize minimumEntityCountForSections=_minimumEntityCountForSections;
- (void)_unfilteredEnumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000503d1
- (id)_templateDefinitionTypeToModeValueMap;	// IMP=0x00000000000501c0
- (id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2;	// IMP=0x00000000000500d8
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2;	// IMP=0x000000000004fea8
@property(readonly, nonatomic, getter=isMalformed) _Bool malformed;
@property(readonly, nonatomic) _Bool hasSectionHeaders;
- (_Bool)allowsMultipleSelectionDuringEditing;	// IMP=0x000000000004fc1a
- (long long)pageComponentType;	// IMP=0x000000000004fc0f
- (_Bool)isDynamicContainer;	// IMP=0x000000000004fc07
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x000000000004fb4b
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000004fa94

@end

