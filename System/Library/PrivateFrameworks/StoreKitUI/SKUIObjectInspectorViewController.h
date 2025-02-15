//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSMutableArray, NSString, UINavigationBar, UITableView, UIView, UIVisualEffectView, _SKUIInspectablePropertySection;
@protocol SKUIInspectableObject;

__attribute__((visibility("hidden")))
@interface SKUIObjectInspectorViewController : UIViewController
{
    id <SKUIInspectableObject> _inspectableObject;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    UIVisualEffectView *_backgroundView;	// 24 = 0x18
    UINavigationBar *_navigationBar;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
    _SKUIInspectablePropertySection *_currentSection;	// 48 = 0x30
    NSMutableArray *_sections;	// 56 = 0x38
}

+ (void)showInspectableObject:(id)arg1;	// IMP=0x00100000002359c7
- (void).cxx_destruct;	// IMP=0x0000000000237d26
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) _SKUIInspectablePropertySection *currentSection; // @synthesize currentSection=_currentSection;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <SKUIInspectableObject> inspectableObject; // @synthesize inspectableObject=_inspectableObject;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000237a4a
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000237897
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000237817
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002377be
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000237723
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002376df
- (void)exposePropertyWithFriendlyName:(id)arg1 value:(id)arg2;	// IMP=0x00000000002375fb
- (void)endSection;	// IMP=0x000000000023753d
- (void)beginSectionWithFriendlyName:(id)arg1;	// IMP=0x00000000002374a6
@property(copy, nonatomic) NSString *information;
@property(copy, nonatomic) NSString *friendlyName;
- (void)populate;	// IMP=0x000000000023723d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002370dd
- (struct CGRect)calculateContentViewFrameWithParentBounds:(struct CGRect)arg1 withTraitCollection:(id)arg2;	// IMP=0x0000000000236f62
- (void)dismiss;	// IMP=0x0000000000236d9d
- (void)showFromViewController:(id)arg1;	// IMP=0x00000000002369c0
- (void)handleBackgroundTap:(id)arg1;	// IMP=0x0000000000236984
- (void)done:(id)arg1;	// IMP=0x0000000000236972
- (void)setupConstraints;	// IMP=0x0000000000236113
- (void)viewDidLoad;	// IMP=0x0000000000235bb3
- (id)initWithInspectableObject:(id)arg1;	// IMP=0x0000000000235ae6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

