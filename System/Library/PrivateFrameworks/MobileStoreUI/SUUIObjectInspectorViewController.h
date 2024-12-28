//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSMutableArray, NSString, UINavigationBar, UITableView, UIView, UIVisualEffectView, _SUUIInspectablePropertySection;
@protocol SUUIInspectableObject;

__attribute__((visibility("hidden")))
@interface SUUIObjectInspectorViewController : UIViewController
{
    id <SUUIInspectableObject> _inspectableObject;	// 8 = 0x8
    UIView *_contentView;	// 16 = 0x10
    UIVisualEffectView *_backgroundView;	// 24 = 0x18
    UINavigationBar *_navigationBar;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
    _SUUIInspectablePropertySection *_currentSection;	// 48 = 0x30
    NSMutableArray *_sections;	// 56 = 0x38
}

+ (void)showInspectableObject:(id)arg1;	// IMP=0x00100000002fb1fe
- (void).cxx_destruct;	// IMP=0x00000000002fd561
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) _SUUIInspectablePropertySection *currentSection; // @synthesize currentSection=_currentSection;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <SUUIInspectableObject> inspectableObject; // @synthesize inspectableObject=_inspectableObject;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000002fd285
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000002fd0d2
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000002fd052
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000002fcff9
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002fcf5e
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000002fcf1a
- (void)exposePropertyWithFriendlyName:(id)arg1 value:(id)arg2;	// IMP=0x00000000002fce36
- (void)endSection;	// IMP=0x00000000002fcd78
- (void)beginSectionWithFriendlyName:(id)arg1;	// IMP=0x00000000002fcc52
@property(copy, nonatomic) NSString *information;
@property(copy, nonatomic) NSString *friendlyName;
- (void)populate;	// IMP=0x00000000002fc9e9
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002fc889
- (struct CGRect)calculateContentViewFrameWithParentBounds:(struct CGRect)arg1 withTraitCollection:(id)arg2;	// IMP=0x00000000002fc70e
- (void)dismiss;	// IMP=0x00000000002fc549
- (void)showFromViewController:(id)arg1;	// IMP=0x00000000002fc16c
- (void)handleBackgroundTap:(id)arg1;	// IMP=0x00000000002fc130
- (void)done:(id)arg1;	// IMP=0x00000000002fc11e
- (void)setupConstraints;	// IMP=0x00000000002fb8bf
- (void)viewDidLoad;	// IMP=0x00000000002fb35f
- (id)initWithInspectableObject:(id)arg1;	// IMP=0x00000000002fb2d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
