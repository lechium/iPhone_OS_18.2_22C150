//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNGroup, NSArray, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsItem : NSObject
{
    _Bool _selected;	// 8 = 0x8
    _Bool _bypassIfUnique;	// 9 = 0x9
    _Bool _shouldHide;	// 10 = 0xa
    _Bool _soloSelect;	// 11 = 0xb
    NSString *_identifier;	// 16 = 0x10
    CDUnknownBlockType _nameProvider;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    long long _type;	// 40 = 0x28
    CNGroup *_group;	// 48 = 0x30
    NSString *_containerIdentifier;	// 56 = 0x38
    long long _containerType;	// 64 = 0x40
    long long _contactCount;	// 72 = 0x48
    NSArray *_childItems;	// 80 = 0x50
    CNAccountsAndGroupsItem *_parentItem;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000258585
@property(nonatomic) _Bool soloSelect; // @synthesize soloSelect=_soloSelect;
@property(nonatomic) _Bool shouldHide; // @synthesize shouldHide=_shouldHide;
@property(nonatomic) _Bool bypassIfUnique; // @synthesize bypassIfUnique=_bypassIfUnique;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak CNAccountsAndGroupsItem *parentItem; // @synthesize parentItem=_parentItem;
@property(retain, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
@property(nonatomic) long long contactCount; // @synthesize contactCount=_contactCount;
@property(nonatomic) long long containerType; // @synthesize containerType=_containerType;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(retain, nonatomic) CNGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) CDUnknownBlockType nameProvider; // @synthesize nameProvider=_nameProvider;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002582a7
@property(readonly, nonatomic) UIImage *groupSymbol;
@property(readonly, nonatomic) NSString *contactCountString;
- (long long)localizedCompare:(id)arg1;	// IMP=0x00000000002580d8
- (id)arrayForDisplay:(_Bool)arg1;	// IMP=0x0000000000257dc1
- (void)setSelected:(_Bool)arg1 affectingChildren:(_Bool)arg2;	// IMP=0x0000000000257a67
@property(readonly, nonatomic) _Bool canDelete;
@property(readonly, nonatomic) _Bool canRename;
@property(readonly, nonatomic) _Bool canExport;
@property(readonly, nonatomic) _Bool canMessage;
@property(readonly, nonatomic) _Bool canEmail;
@property(readonly, nonatomic) _Bool canShowContextMenu;
@property(readonly, nonatomic) _Bool acceptsVCardDrop;
@property(readonly, nonatomic) _Bool isEditable;
- (id)initWithType:(long long)arg1 nameProvider:(CDUnknownBlockType)arg2;	// IMP=0x00000000002576a9

@end
